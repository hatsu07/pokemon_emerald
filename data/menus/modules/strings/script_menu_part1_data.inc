	@ src/data/script_menu.h:1326 script_menu_line_1326
	.globl gStdString_KeyItems
gStdString_KeyItems: @ 0x085CACD6
	.string "たいせつなもの{EOS}"
	.if (. - gStdString_KeyItems) > 0x8
	.error "gStdString_KeyItems may not grow beyond its original slot"
	.endif
	.if (. - gStdString_KeyItems) < 0x8
	.space 0x8 - (. - gStdString_KeyItems)
	.endif
