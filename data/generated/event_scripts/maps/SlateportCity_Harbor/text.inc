	@ data/maps/SlateportCity_Harbor/scripts.inc:383 SlateportCity_Harbor_Text_FerryServiceUnavailable
	.globl SlateportCity_Harbor_Text_FerryServiceUnavailable
SlateportCity_Harbor_Text_FerryServiceUnavailable: @ 0x08209BC5
	.string "えっ? ふね ですか?\pもうしわけ ございません げんざい\nれんらくせんは ないんです……{EOS}"
	.if (. - SlateportCity_Harbor_Text_FerryServiceUnavailable) > 0x2e
	.error "SlateportCity_Harbor_Text_FerryServiceUnavailable may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Harbor_Text_FerryServiceUnavailable) < 0x2e
	.space 0x2e - (. - SlateportCity_Harbor_Text_FerryServiceUnavailable)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl BattleFrontier_OutsideWest_Text_MayISeeYourTicket_Copy_SlateportCity_Harbor
BattleFrontier_OutsideWest_Text_MayISeeYourTicket_Copy_SlateportCity_Harbor: @ 0x08209BF3
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_MayISeeYourTicket_Copy_SlateportCity_Harbor) > 0x23
	.error "BattleFrontier_OutsideWest_Text_MayISeeYourTicket_Copy_SlateportCity_Harbor may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_MayISeeYourTicket_Copy_SlateportCity_Harbor) < 0x23
	.space 0x23 - (. - BattleFrontier_OutsideWest_Text_MayISeeYourTicket_Copy_SlateportCity_Harbor)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_Copy_SlateportCity_Harbor
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_Copy_SlateportCity_Harbor: @ 0x08209C16
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_Copy_SlateportCity_Harbor) > 0x3c
	.error "BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_Copy_SlateportCity_Harbor may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_Copy_SlateportCity_Harbor) < 0x3c
	.space 0x3c - (. - BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_Copy_SlateportCity_Harbor)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo_Copy_SlateportCity_Harbor
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo_Copy_SlateportCity_Harbor: @ 0x08209C52
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo_Copy_SlateportCity_Harbor) != 0x2f
	.error "BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo_Copy_SlateportCity_Harbor must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_Copy_SlateportCity_Harbor
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_Copy_SlateportCity_Harbor: @ 0x08209C81
	.string "また ごりよう ください!{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_Copy_SlateportCity_Harbor) > 0xe
	.error "BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_Copy_SlateportCity_Harbor may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_Copy_SlateportCity_Harbor) < 0xe
	.space 0xe - (. - BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_Copy_SlateportCity_Harbor)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl BattleFrontier_OutsideWest_Text_SlateportItIs_Copy_SlateportCity_Harbor
BattleFrontier_OutsideWest_Text_SlateportItIs_Copy_SlateportCity_Harbor: @ 0x08209C8F
	.string "カイナシティ ですね!{EOS}"
	.if (. - BattleFrontier_OutsideWest_Text_SlateportItIs_Copy_SlateportCity_Harbor) > 0xc
	.error "BattleFrontier_OutsideWest_Text_SlateportItIs_Copy_SlateportCity_Harbor may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_SlateportItIs_Copy_SlateportCity_Harbor) < 0xc
	.space 0xc - (. - BattleFrontier_OutsideWest_Text_SlateportItIs_Copy_SlateportCity_Harbor)
	.endif
	@ data/maps/SlateportCity_Harbor/scripts.inc:411 SlateportCity_Harbor_Text_BattleFrontierItIs
	.globl SlateportCity_Harbor_Text_BattleFrontierItIs
SlateportCity_Harbor_Text_BattleFrontierItIs: @ 0x08209C9B
	.string "バトルフロンティア ですね!{EOS}"
	.if (. - SlateportCity_Harbor_Text_BattleFrontierItIs) > 0xf
	.error "SlateportCity_Harbor_Text_BattleFrontierItIs may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_Harbor_Text_BattleFrontierItIs) < 0xf
	.space 0xf - (. - SlateportCity_Harbor_Text_BattleFrontierItIs)
	.endif

