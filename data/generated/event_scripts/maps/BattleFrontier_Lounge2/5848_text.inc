	@ data/maps/BattleFrontier_Lounge2/scripts.inc:118 BattleFrontier_Lounge2_Text_SwingByForTheLatestWord
	.globl gText_Rom_236B74
gText_Rom_236B74: @ 0x08236B74
	.string "やあやあ また ぼくの じょうほうを\nききに きたんだね! しかたないなー!"
	.byte EOS
	.if (. - gText_Rom_236B74) > 0x27
	.error "gText_Rom_236B74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236B74) < 0x27
	.space 0x27 - (. - gText_Rom_236B74)
	.endif
