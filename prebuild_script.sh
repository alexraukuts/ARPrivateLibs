#! /bin/sh
#
# @name 	- prebuild_script.sh
# @abstract - This script runs as a pre build step and will expand the zipped PolarisOfficeFramework and PSPDFKit framework files
# @output 	- unzipped PolarisOfficeFramework & PSPDFKit files
# @loginfo 	- polaris_prebuild_script.log
#

echo "######################################################################### SCRIPT STARTS - $(date) #########################################################################"
echo
echo "Starting polaris_prebuild_script.sh at $(date)"
echo
echo

pwd
echo "${PROJECT_DIR}"

if [ -f prebuild_script.sh ]; then
	echo "Shell script found"
else
	echo "Shell script not found"
fi

# unzip the Polaris framework
cd "${PROJECT_DIR}/Polaris/"
OUTPUTCODE=$?
if [[ ${OUTPUTCODE} -ne 0 ]]; then
	echo "Unable to find directory at location - ${PROJECT_DIR}/Polaris"
	echo "Terminating prebuild script with error code ${OUTPUTCODE} at $(date)"
	exit 1
fi
echo "Starting Polaris unzip at $(date)"
cat PolarisOfficeSDK.tar.gz.* | tar -zxf - -C "PolarisOfficeSDK.framework/Versions/A" --keep-newer-files
OUTPUTCODE=$?
if [[ ${OUTPUTCODE} -ne 0 ]]; then
	echo "PolarisOfficeSDK unzip failed with error code ${OUTPUTCODE} at $(date)"
	echo "Terminating prebuild script with error code ${OUTPUTCODE} at $(date)"
	exit 1
else
	echo "Completed Polaris unzip at $(date)"
fi

# mark script completion
echo
echo
echo "Completed polaris_prebuild_script.sh at $(date)"
echo
echo "######################################################################### SCRIPT ENDS - $(date) #########################################################################"
