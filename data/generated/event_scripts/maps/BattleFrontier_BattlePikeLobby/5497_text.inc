	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:426 BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_233B95
gText_Rom_233B95: @ 0x08233B95
	.string "バトルゲームでは\nポケモンに もたせた きのみや ハーブは\lいちどしか こうかを はっき しません"
	.byte EOS
	.if (. - gText_Rom_233B95) != 0x32
	.error "gText_Rom_233B95 must retain its original byte length"
	.endif
