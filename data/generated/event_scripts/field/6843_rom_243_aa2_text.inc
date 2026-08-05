	@ field-script:0x1F01FD FieldScriptText_243AA2
	.globl gText_Rom_243AA2
gText_Rom_243AA2: @ 0x08243AA2
	.string "パソコンに\nポケモン　トレーナー　こうざの\lメールが　きている！\p……　……　……\pポケモンが　おぼえられる　わざは　4つ！\pどんな　わざを　おぼえさせるかで\nトレーナーの　じつりょくが　とわれます！\p……　……　……$"
	.if (. - gText_Rom_243AA2) > 0x6e
	.error "gText_Rom_243AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243AA2) < 0x6e
	.space 0x6e - (. - gText_Rom_243AA2)
	.endif
