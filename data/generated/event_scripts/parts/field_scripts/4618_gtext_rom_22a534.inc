	@ field-script:0x22A13A FieldScriptText_22A534
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22A534
gText_Rom_22A534: @ 0x0822A534
	.string "おぬし……\pちょうせん　できる　ポケモンが\n3ひき　おらんぞ！\pちょうせん　するには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\p3ひき　ようい　してくれ\pまた　もたせる　どうぐも\nすべて　ちがう　もので　なければ　いかん\pそして　タマゴ{0xFD}{0x02}ちょうせん　させる　ことは　できん！\pじゅんびを　ととのえてから　また　きなさい$"
	.if (. - gText_Rom_22A534) != 0xab
	.error "gText_Rom_22A534 must retain its original byte length"
	.endif
