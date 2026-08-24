	@ src/pokenav_match_call_list.c:39 gText_CallCantBeMadeHere
	.globl gText_CallCantBeMadeHere
gText_CallCantBeMadeHere: @ 0x085CB6D1
	.string "ここでは あいてを よびだす ことが\nできないようだ{EOS}"
	.if (. - gText_CallCantBeMadeHere) > 0x1b
	.error "gText_CallCantBeMadeHere may not grow beyond its original slot"
	.endif
	.if (. - gText_CallCantBeMadeHere) < 0x1b
	.space 0x1b - (. - gText_CallCantBeMadeHere)
	.endif

