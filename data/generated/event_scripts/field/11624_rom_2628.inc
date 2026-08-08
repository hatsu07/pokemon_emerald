	@ field-script:0x21EA29 FieldScriptText_2628AB
	.globl gText_Rom_2628AB
gText_Rom_2628AB: @ 0x082628AB
	.string "ポケモンに　ポロックを　なげても\nしらんぷり　される　ときが　あるのよ\pポケモンにも　すききらいが　あるのかしら？$"
	.if (. - gText_Rom_2628AB) > 0x3a
	.error "gText_Rom_2628AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2628AB) < 0x3a
	.space 0x3a - (. - gText_Rom_2628AB)
	.endif

	@ field-script:0x21EA0C FieldScriptText_2628E5
	.globl gText_Rom_2628E5
gText_Rom_2628E5: @ 0x082628E5
	.string "ぜぇ……　ぜぇ……\nやっと　ここまで　きたけど……\pつかれちゃって　ポケモン　つかまえる\nげんきも　のこって　ないよ……$"
	.if (. - gText_Rom_2628E5) > 0x3d
	.error "gText_Rom_2628E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2628E5) < 0x3d
	.space 0x3d - (. - gText_Rom_2628E5)
	.endif
