	@ data/maps/LilycoveCity/scripts.inc:585 LilycoveCity_Text_StrangeCaveInCove
	.globl gText_Rom_1E0E2F
gText_Rom_1E0E2F: @ 0x081E0E2F
	.string "まちの はずれの いりえに\nおかしな どうくつが あるの みた?{EOS}"
	.if (. - gText_Rom_1E0E2F) > 0x21
	.error "gText_Rom_1E0E2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0E2F) < 0x21
	.space 0x21 - (. - gText_Rom_1E0E2F)
	.endif
