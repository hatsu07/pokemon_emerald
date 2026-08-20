	@ data/maps/MeteorFalls_1F_1R/scripts.inc:250 MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua
	.globl gText_Rom_212DF2
gText_Rom_212DF2: @ 0x08212DF2
	.string "ウヒョヒョ……!\nアクアだん まで やってきたのかよ!\pいちいち あいてを してやるのも\nめんどうだな……\pまあ いいや!\nいんせきは てに いれたし\lさっさと えんとつやまに いくか!\pウヒョヒョ!\nあばよ! まぬけな アクアだん!{EOS}"
	.if (. - gText_Rom_212DF2) > 0x76
	.error "gText_Rom_212DF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212DF2) < 0x76
	.space 0x76 - (. - gText_Rom_212DF2)
	.endif
