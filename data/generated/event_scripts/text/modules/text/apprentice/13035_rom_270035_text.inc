	@ data/text/apprentice.inc:469 gText_ApprenticeHoldNothing15
	.globl gText_Rom_270035
gText_Rom_270035: @ 0x08270035
	.string "なにも もたない ほうが いい……?\nほんとうかね?"
	.byte EOS
	.if (. - gText_Rom_270035) > 0x1b
	.error "gText_Rom_270035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270035) < 0x1b
	.space 0x1b - (. - gText_Rom_270035)
	.endif
