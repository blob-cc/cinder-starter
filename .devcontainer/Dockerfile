# Use an official Ubuntu as a parent image
FROM ubuntu:24.04

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive

# Install dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    libgl1-mesa-dev \
    libxrandr-dev \
    libxinerama-dev \
    libxcursor-dev \
    libxi-dev

# Copy the project into the container

COPY . /usr/src/MyCinderProject

# Set the working directory

WORKDIR /usr/src/MyCinderProject

# Build the project

RUN mkdir build && cd build && cmake .. && make -j$(nproc)

# Run the application

CMD [”./build/MyCinderProject”]