	@ field-script:0x21ECA4 FieldScriptText_21EEB7
	.globl gText_Rom_21EEB7
gText_Rom_21EEB7: @ 0x0821EEB7
	.string "ここは　バトルドーム！\nめざせ！　むてきの　スーパースター！"
	.byte EOS
	.if (. - gText_Rom_21EEB7) > 0x1f
	.error "gText_Rom_21EEB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EEB7) < 0x1f
	.space 0x1f - (. - gText_Rom_21EEB7)
	.endif
	@ field-script:0x21ECAD FieldScriptText_21EED6
	.globl gText_Rom_21EED6
gText_Rom_21EED6: @ 0x0821EED6
	.string "ここは　バトルファクトリー！\nさがせ！　さいきょう　ポケモン！"
	.byte EOS
	.if (. - gText_Rom_21EED6) > 0x20
	.error "gText_Rom_21EED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EED6) < 0x20
	.space 0x20 - (. - gText_Rom_21EED6)
	.endif
	@ field-script:0x21ECB6 FieldScriptText_21EEF6
	.globl gText_Rom_21EEF6
gText_Rom_21EEF6: @ 0x0821EEF6
	.string "ここは　バトルチューブ！\nえらべ！　3つの　みち！"
	.byte EOS
	.if (. - gText_Rom_21EEF6) > 0x1a
	.error "gText_Rom_21EEF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EEF6) < 0x1a
	.space 0x1a - (. - gText_Rom_21EEF6)
	.endif
	@ field-script:0x21ECBF FieldScriptText_21EF10
	.globl gText_Rom_21EF10
gText_Rom_21EF10: @ 0x0821EF10
	.string "ここは　バトルタワー　さ！\pトレーナーは　きたえあげた　ポケモンで\nひたすら　かちぬいて　いくのさ！"
	.byte EOS
	.if (. - gText_Rom_21EF10) > 0x33
	.error "gText_Rom_21EF10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF10) < 0x33
	.space 0x33 - (. - gText_Rom_21EF10)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl gText_Rom_21EF43
gText_Rom_21EF43: @ 0x0821EF43
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?"
	.byte EOS
	.if (. - gText_Rom_21EF43) > 0x23
	.error "gText_Rom_21EF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF43) < 0x23
	.space 0x23 - (. - gText_Rom_21EF43)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl gText_Rom_21EF66
gText_Rom_21EF66: @ 0x0821EF66
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです"
	.byte EOS
	.if (. - gText_Rom_21EF66) > 0x3c
	.error "gText_Rom_21EF66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF66) < 0x3c
	.space 0x3c - (. - gText_Rom_21EF66)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21EFA2
gText_Rom_21EFA2: @ 0x0821EFA2
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?"
	.byte EOS
	.if (. - gText_Rom_21EFA2) != 0x2f
	.error "gText_Rom_21EFA2 must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_21EFD1
gText_Rom_21EFD1: @ 0x0821EFD1
	.string "カイナシティ ですね!"
	.byte EOS
	.if (. - gText_Rom_21EFD1) > 0xc
	.error "gText_Rom_21EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFD1) < 0xc
	.space 0xc - (. - gText_Rom_21EFD1)
	.endif
