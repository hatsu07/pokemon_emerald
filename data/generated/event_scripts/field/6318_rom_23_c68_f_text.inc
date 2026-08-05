	@ field-script:0x23C475 FieldScriptText_23C68F
	.globl gText_Rom_23C68F
gText_Rom_23C68F: @ 0x0823C68F
	.string "ポケモンも　だいすき　サイコソーダ\nいっぽん　300えん　だよー\lかって　いきなよー！"
	.byte EOS
	.if (. - gText_Rom_23C68F) > 0x2c
	.error "gText_Rom_23C68F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C68F) < 0x2c
	.space 0x2c - (. - gText_Rom_23C68F)
	.endif
