import csv
import boto3
with open('credentials.csv','r') as input:
    next(input)#skip first line
    reader=csv.reader(input)
    for line in reader:
        accessKeyId=line[2]
        secretAccessKey=line[3]
photo='rohitsmiling.jpg'
client=boto3.client('rekognition',region_name='ap-south-1',aws_access_key_id=accessKeyId,
                aws_secret_access_key=secretAccessKey)
with open(photo,'rb') as source_image:
    source_bytes=source_image.read()
response=client.compare_faces(
SourceImage={'S3Object': {
            'Bucket': 'sumitrekognition',
            'Name': photo,
        }},
TargetImage={'S3Object': {
            'Bucket': 'sumitrekognition',
            'Name': 'rohit2.jpg',
        }}
        )
for key, value in response.items():
    if key in ('FaceMatches','UnmatchedFaces'):
        print(key)
        for att in value:
            print(att)
