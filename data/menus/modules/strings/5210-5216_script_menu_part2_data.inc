	@ src/data/script_menu.h:1328 script_menu_line_1328
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gStdString_TMsHMs
gStdString_TMsHMs: @ 0x085CACE2
	.string "わざマシン{EOS}"
	.if (. - gStdString_TMsHMs) != 0x6
	.error "gStdString_TMsHMs must retain its original byte length"
	.endif
