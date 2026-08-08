	@ field-script:0x22A277 FieldScriptText_22A9D6
	.globl gText_Rom_22A9D6
gText_Rom_22A9D6: @ 0x0822A9D6
	.string "あいてを　よわらせたり……\nじわじわ　せめて　くれるのは\lどんな　せいかくかな……\p……　いがいに　のうてんき　とか？\p……　まさかねぇ……$"
	.if (. - gText_Rom_22A9D6) > 0x47
	.error "gText_Rom_22A9D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A9D6) < 0x47
	.space 0x47 - (. - gText_Rom_22A9D6)
	.endif
