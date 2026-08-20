	@ field-script:0x24423D FieldScriptText_243EB4
	.globl gText_Rom_243EB4
gText_Rom_243EB4: @ 0x08243EB4
	.string "ポケモンを　もちきれません！\pボックスも　いっぱいで\nてんそう　できません！{EOS}"
	.if (. - gText_Rom_243EB4) > 0x27
	.error "gText_Rom_243EB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243EB4) < 0x27
	.space 0x27 - (. - gText_Rom_243EB4)
	.endif
