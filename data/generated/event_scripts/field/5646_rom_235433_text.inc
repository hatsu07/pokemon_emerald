	@ field-script:0x2353E8 FieldScriptText_235433
	.globl gText_Rom_235433
gText_Rom_235433: @ 0x08235433
	.string "ここは　ランキングホール\pバトルフロンティアに　ちょうせん　した\nトレーナーたちの　いだいな　きろくを\lたたえる　ばしょ　です"
	.byte EOS
	.if (. - gText_Rom_235433) > 0x40
	.error "gText_Rom_235433 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235433) < 0x40
	.space 0x40 - (. - gText_Rom_235433)
	.endif
