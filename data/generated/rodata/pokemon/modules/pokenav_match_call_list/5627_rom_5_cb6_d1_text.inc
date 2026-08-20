	@ src/pokenav_match_call_list.c:39 gText_CallCantBeMadeHere
	.globl gText_Rom_5CB6D1
gText_Rom_5CB6D1: @ 0x085CB6D1
	.string "ここでは あいてを よびだす ことが\nできないようだ{EOS}"
	.if (. - gText_Rom_5CB6D1) > 0x1b
	.error "gText_Rom_5CB6D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6D1) < 0x1b
	.space 0x1b - (. - gText_Rom_5CB6D1)
	.endif

