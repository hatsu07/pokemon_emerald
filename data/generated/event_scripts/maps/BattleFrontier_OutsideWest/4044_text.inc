	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:393 BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier
	.globl gText_Rom_21F3F2
gText_Rom_21F3F2: @ 0x0821F3F2
	.string "とうとう バトルフロンティアに きたわ!\pみんな あたしの つよさと うつくしさに\nくぎづけに なるわね!"
	.byte EOS
	.if (. - gText_Rom_21F3F2) > 0x36
	.error "gText_Rom_21F3F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F3F2) < 0x36
	.space 0x36 - (. - gText_Rom_21F3F2)
	.endif
