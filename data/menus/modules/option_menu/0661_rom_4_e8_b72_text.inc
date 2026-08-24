	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Option
gText_Option: @ 0x084E8B72
	.string "せってい{EOS}"
	.if (. - gText_Option) > 0x5
	.error "gText_Option may not grow beyond its original slot"
	.endif
	.if (. - gText_Option) < 0x5
	.space 0x5 - (. - gText_Option)
	.endif
