	@ data/maps/BattleFrontier_Lounge2/scripts.inc:115 BattleFrontier_Lounge2_Text_FrontierManiacIntro
	.globl gText_Rom_236B0A
gText_Rom_236B0A: @ 0x08236B0A
	.string "やあやあ ぼくは バトルフロンティアいちの\nじょうほうつう!\pフロンティアマニアって よんでくれよ!\pきみ トレーナーだろ?\pぼくが あつめた バトルフロンティアの\nホットな じょうほうを おしえて あげるよ!"
	.byte EOS
	.if (. - gText_Rom_236B0A) > 0x6a
	.error "gText_Rom_236B0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236B0A) < 0x6a
	.space 0x6a - (. - gText_Rom_236B0A)
	.endif
