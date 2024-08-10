#!/bin/bash

# Set deployment directory
DEPLOY_DIR="deploy"

# Create deployment directory if it doesn't exist
mkdir -p $DEPLOY_DIR

# Copy necessary files to the deployment directory
cp -r assets $DEPLOY_DIR/
cp -r build/MyCinderProject $DEPLOY_DIR/

echo "Deployment completed. Files are in the $DEPLOY_DIR directory."