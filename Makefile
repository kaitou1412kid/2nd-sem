.PHONY: clean All

All:
	@echo "----------Building project:[ sixth_class - Debug ]----------"
	@cd "sixth_class" && "$(MAKE)" -f  "sixth_class.mk"
clean:
	@echo "----------Cleaning project:[ sixth_class - Debug ]----------"
	@cd "sixth_class" && "$(MAKE)" -f  "sixth_class.mk" clean
