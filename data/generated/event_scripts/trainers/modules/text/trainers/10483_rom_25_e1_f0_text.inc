	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E1F0
gText_Rom_25E1F0: @ 0x0825E1F0
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!{EOS}"
	.if (. - gText_Rom_25E1F0) > 0x41
	.error "gText_Rom_25E1F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1F0) < 0x41
	.space 0x41 - (. - gText_Rom_25E1F0)
	.endif
