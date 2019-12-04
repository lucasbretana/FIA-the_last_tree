# start form a clean debian
FROM debian:stable
# install a beetter package manager
RUN apt update && apt -y install aptitude && aptitude update
# install dependencies
RUN aptitude -y install python3 python3-pip
# copy server project to inside the container
COPY ./TheLastTreeAI /opt/TheLastTreeAI
# set the damn working place
WORKDIR /opt/TheLastTreeAI
# intall the frecking python dependencies
RUN pip3 install -r requirements.txt
# run the damn thing
ENTRYPOINT ["python3", "./server.py"]
