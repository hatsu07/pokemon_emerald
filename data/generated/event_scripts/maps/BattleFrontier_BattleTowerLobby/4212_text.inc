	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1150 BattleFrontier_BattleTowerLobby_Text_ExplainMonRules
	.globl gText_Rom_22197A
gText_Rom_22197A: @ 0x0822197A
	.string "ちょうせんする バトルルーム ごとに\nつれていく ポケモンの かずが かわります\pシングルでは 3ひき\nダブルでは 4ひき\lマルチでは 2ひき と なっています"
	.byte EOS
	.if (. - gText_Rom_22197A) > 0x51
	.error "gText_Rom_22197A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22197A) < 0x51
	.space 0x51 - (. - gText_Rom_22197A)
	.endif
