	@ field-script:0x242F01 FieldScriptText_2439F5
	.globl gText_Rom_2439F5
gText_Rom_2439F5: @ 0x082439F5
	.string "つかれた　ポケモンも　ひとやすみ！\n「ポケモンセンター」{EOS}"
	.if (. - gText_Rom_2439F5) > 0x1d
	.error "gText_Rom_2439F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439F5) < 0x1d
	.space 0x1d - (. - gText_Rom_2439F5)
	.endif
