################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
src/SD_HardWare.obj: ../src/SD_HardWare.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"E:/ti/ccsv5/tools/compiler/msp430_4.1.1/bin/cl430" -vmsp --abi=coffabi -g --include_path="E:/ti/ccsv5/ccs_base/msp430/include" --include_path="E:/ti/ccsv5/tools/compiler/msp430_4.1.1/include" --include_path="D:/workspace/msp430G2/11_SPI_SD/src" --define=__MSP430G2553__ --diag_warning=225 --display_error_number --printf_support=minimal --preproc_with_compile --preproc_dependency="src/SD_HardWare.pp" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/SD_SPI.obj: ../src/SD_SPI.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"E:/ti/ccsv5/tools/compiler/msp430_4.1.1/bin/cl430" -vmsp --abi=coffabi -g --include_path="E:/ti/ccsv5/ccs_base/msp430/include" --include_path="E:/ti/ccsv5/tools/compiler/msp430_4.1.1/include" --include_path="D:/workspace/msp430G2/11_SPI_SD/src" --define=__MSP430G2553__ --diag_warning=225 --display_error_number --printf_support=minimal --preproc_with_compile --preproc_dependency="src/SD_SPI.pp" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/USCI_SPI.obj: ../src/USCI_SPI.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"E:/ti/ccsv5/tools/compiler/msp430_4.1.1/bin/cl430" -vmsp --abi=coffabi -g --include_path="E:/ti/ccsv5/ccs_base/msp430/include" --include_path="E:/ti/ccsv5/tools/compiler/msp430_4.1.1/include" --include_path="D:/workspace/msp430G2/11_SPI_SD/src" --define=__MSP430G2553__ --diag_warning=225 --display_error_number --printf_support=minimal --preproc_with_compile --preproc_dependency="src/USCI_SPI.pp" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


