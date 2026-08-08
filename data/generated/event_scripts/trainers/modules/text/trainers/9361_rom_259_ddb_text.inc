	@ data/text/trainers.inc:199 Route104_Text_MiaNotEnoughMons (+1 aliases)
	.globl gText_Rom_259DDB
gText_Rom_259DDB: @ 0x08259DDB
	.string "ミオ『あたしたちと たたかうですか?\pじゃあ ポケモンを\n2ひき つれてないと ダメですよ!\lだって あたしたち つよいもん!"
	.byte EOS
	.if (. - gText_Rom_259DDB) > 0x40
	.error "gText_Rom_259DDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259DDB) < 0x40
	.space 0x40 - (. - gText_Rom_259DDB)
	.endif
