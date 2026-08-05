	@ data/maps/TrainerHill_Entrance/scripts.inc:345 TrainerHill_Roof_Text_GotHereMarvelouslyQuickly
	.globl gText_Rom_23BDE9
gText_Rom_23BDE9: @ 0x0823BDE9
	.string "オー! もしかして すごく はやく\nここまで きたんじゃないー!?\pこの わたくしに あうために そんなに\nがんばって くれたんだねー!\pうれしすぎるから うけつけの\nタイムボードに きろく しておくぜー!"
	.byte EOS
	.if (. - gText_Rom_23BDE9) > 0x68
	.error "gText_Rom_23BDE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BDE9) < 0x68
	.space 0x68 - (. - gText_Rom_23BDE9)
	.endif
