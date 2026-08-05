	@ data/text/match_call.inc:652 MatchCall_Text_Wattson_PreparingPostGame
	.globl gText_Rom_26A1EB
gText_Rom_26A1EB: @ 0x0826A1EB
	.string "テッセン『わっははは!\pおまえさん とうとう やったな!\nうわさは わしの みみにも とどいとる!\pこちらは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうじゃ\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - gText_Rom_26A1EB) > 0x95
	.error "gText_Rom_26A1EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A1EB) < 0x95
	.space 0x95 - (. - gText_Rom_26A1EB)
	.endif
