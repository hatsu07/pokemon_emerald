	@ field-script:0x2353F1 FieldScriptText_235473
	.globl gText_Rom_235473
gText_Rom_235473: @ 0x08235473
	.string "バトルドーム　バトルチューブ\nバトルファクトリー　の　きろくは　こちら"
	.byte EOS
	.if (. - gText_Rom_235473) > 0x24
	.error "gText_Rom_235473 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235473) < 0x24
	.space 0x24 - (. - gText_Rom_235473)
	.endif
