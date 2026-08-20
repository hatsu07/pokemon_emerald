	@ field-script:0x212835 FieldScriptText_2128DD
	.globl gText_Rom_2128DD
gText_Rom_2128DD: @ 0x082128DD
	.string "どうしても　シダケに　いきたい\nやつが　じぶんの　ちから　だけで\lトンネルを　ほっているよ\pにんげんの　ちからで　すこしずつ　ほれば\nポケモンを　おどろかせなくて　すむし\lまわりの　しぜんにも　わるい　えいきょうを\lあたえないで　すむって　いってな{EOS}"
	.if (. - gText_Rom_2128DD) > 0x7d
	.error "gText_Rom_2128DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2128DD) < 0x7d
	.space 0x7d - (. - gText_Rom_2128DD)
	.endif
