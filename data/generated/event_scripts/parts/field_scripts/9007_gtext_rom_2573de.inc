	@ field-script:0x25729D FieldScriptText_2573DE
	.globl gText_Rom_2573DE
gText_Rom_2573DE: @ 0x082573DE
	.string "こんにちは\nえがおの　すてきな　トレーナーさん！\pぼくは　ポケモントレーナーさん　たちの\nプロフィールを　あつめるのが\lしゅみ　なんだけど……"
	.byte EOS
	.if (. - gText_Rom_2573DE) > 0x48
	.error "gText_Rom_2573DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2573DE) < 0x48
	.space 0x48 - (. - gText_Rom_2573DE)
	.endif
