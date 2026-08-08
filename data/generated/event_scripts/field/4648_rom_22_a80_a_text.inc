	@ field-script:0x22A25C FieldScriptText_22A80A
	.globl gText_Rom_22A80A
gText_Rom_22A80A: @ 0x0822A80A
	.string "ウス！　ウス！　がんばりやの　わしには\nがんばりやの　ポケモンが　ぴったりっス！\pこうげき　こそ　さいだいの　ぼうぎょ！\nガンガン　せめまくって　さいこうっス！\pところで　きいて　くださいッスよー\pときどき　ここに　とっても\nかわいい　おじょうちゃんが\lあそびに　くるッスけど\lそのこったら　ポケモンの　きもちが\lわかるとか　いうんスよー\pいやー　ほんと　かわいいッスよねー……\p……　ん　なんスか？　そのめは？$"
	.if (. - gText_Rom_22A80A) > 0xcf
	.error "gText_Rom_22A80A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A80A) < 0xcf
	.space 0xcf - (. - gText_Rom_22A80A)
	.endif
