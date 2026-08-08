	@ data/text/trainers.inc:187 Route104_Text_GinaNotEnoughMons (+1 aliases)
	.globl gText_Rom_259D1F
gText_Rom_259D1F: @ 0x08259D1F
	.string "ナオ『あら? ポケモン 1ひき だけですか!\nじゃあ あたしたち たたかわない です!\pだって ポケモン 1ひき だけだと\nポケモンが さびしそうで かわいそう です!"
	.byte EOS
	.if (. - gText_Rom_259D1F) > 0x55
	.error "gText_Rom_259D1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259D1F) < 0x55
	.space 0x55 - (. - gText_Rom_259D1F)
	.endif
