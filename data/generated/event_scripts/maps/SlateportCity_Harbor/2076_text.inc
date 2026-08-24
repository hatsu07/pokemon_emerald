	@ data/maps/SlateportCity_Harbor/scripts.inc:383 SlateportCity_Harbor_Text_FerryServiceUnavailable
	.globl gText_Rom_209BC5
gText_Rom_209BC5: @ 0x08209BC5
	.string "えっ? ふね ですか?\pもうしわけ ございません げんざい\nれんらくせんは ないんです……{EOS}"
	.if (. - gText_Rom_209BC5) > 0x2e
	.error "gText_Rom_209BC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209BC5) < 0x2e
	.space 0x2e - (. - gText_Rom_209BC5)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl gText_Rom_209BF3
gText_Rom_209BF3: @ 0x08209BF3
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?{EOS}"
	.if (. - gText_Rom_209BF3) > 0x23
	.error "gText_Rom_209BF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209BF3) < 0x23
	.space 0x23 - (. - gText_Rom_209BF3)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl gText_Rom_209C16
gText_Rom_209C16: @ 0x08209C16
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです{EOS}"
	.if (. - gText_Rom_209C16) > 0x3c
	.error "gText_Rom_209C16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C16) < 0x3c
	.space 0x3c - (. - gText_Rom_209C16)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_209C52
gText_Rom_209C52: @ 0x08209C52
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?{EOS}"
	.if (. - gText_Rom_209C52) != 0x2f
	.error "gText_Rom_209C52 must retain its original byte length"
	.endif
	.globl gText_Rom_209C71
	.set gText_Rom_209C71, gText_Rom_209C52 + 0x1f
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl gText_Rom_209C81
gText_Rom_209C81: @ 0x08209C81
	.string "また ごりよう ください!{EOS}"
	.if (. - gText_Rom_209C81) > 0xe
	.error "gText_Rom_209C81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C81) < 0xe
	.space 0xe - (. - gText_Rom_209C81)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_209C8F
gText_Rom_209C8F: @ 0x08209C8F
	.string "カイナシティ ですね!{EOS}"
	.if (. - gText_Rom_209C8F) > 0xc
	.error "gText_Rom_209C8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C8F) < 0xc
	.space 0xc - (. - gText_Rom_209C8F)
	.endif
	@ data/maps/SlateportCity_Harbor/scripts.inc:411 SlateportCity_Harbor_Text_BattleFrontierItIs
	.globl gText_Rom_209C9B
gText_Rom_209C9B: @ 0x08209C9B
	.string "バトルフロンティア ですね!{EOS}"
	.if (. - gText_Rom_209C9B) > 0xf
	.error "gText_Rom_209C9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C9B) < 0xf
	.space 0xf - (. - gText_Rom_209C9B)
	.endif

