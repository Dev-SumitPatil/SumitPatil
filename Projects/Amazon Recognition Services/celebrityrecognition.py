import csv
import boto3
with open('credentials.csv','r') as input:
    next(input)#skip first line
    reader=csv.reader(input)
    for line in reader:
        accessKeyId=line[2]
        secretAccessKey=line[3]
photo='celebrities2.jpg'
client=boto3.client('rekognition',region_name='ap-south-1',aws_access_key_id=accessKeyId,
                aws_secret_access_key=secretAccessKey)
with open(photo,'rb') as source_image:
    source_bytes=source_image.read()
response=client.recognize_celebrities(Image={'S3Object': {
            'Bucket': 'sumitrekognition',
            'Name': photo,
        }})
for key, value in response.items():
    if key == 'CelebrityFaces':
        for people in value:
            print(people)
