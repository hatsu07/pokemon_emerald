	@ field-script:0x22A147 FieldScriptText_22A5DF
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22A5DF
gText_Rom_22A5DF: @ 0x0822A5DF
	.string "おぬし……\pちょうせん　できる　ポケモンが\n3ひき　おらんぞ！\pちょうせん　するには\nすべて　ちがう　しゅるいの　ポケモンを\p3ひき　ようい　してくれ\pまた　もたせる　どうぐも\nすべて　ちがう　もので　なければ　いかん\pそして　タマゴ{0xFD}{0x02}ちょうせん　させる　ことは　できん！\pじゅんびを　ととのえてから　また　きなさい{EOS}"
	.if (. - gText_Rom_22A5DF) != 0xa0
	.error "gText_Rom_22A5DF must retain its original byte length"
	.endif
