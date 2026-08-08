	@ data/maps/BattleFrontier_Lounge7/scripts.inc:325 BattleFrontier_Lounge7_Text_YouDontWantTo
	.globl gText_Rom_239DC0
gText_Rom_239DC0: @ 0x08239DC0
	.string "なんじゃ? やめるんか……\pあたしゃの すごさを しりたかったら\nいつでも くるが ええぞぃ!"
	.byte EOS
	.if (. - gText_Rom_239DC0) > 0x30
	.error "gText_Rom_239DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239DC0) < 0x30
	.space 0x30 - (. - gText_Rom_239DC0)
	.endif
