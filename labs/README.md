# Build docker centos env (MacOS Big sur)

    > brew install --cask docker
    > docker pull centos
    > docker run -idt -v {labs_path}:/csapp centos # labs_path should be absolute path, -v mount host volume to docker container.
    > docker ps # list running containers
    > docker exec -idt {container_id} /bin/bash


    # First login to the docker centos container
    > yum upgrade -y
    > yum install gcc
    > yum install glibc-devel.i686 # Let x86_64 support x32
    > yum install -y make
