	@ data/maps/DewfordTown/scripts.inc:696 DewfordTown_Text_OfCourseIKnowAboutThat
	.globl gText_Rom_1E556D
gText_Rom_1E556D: @ 0x081E556D
	.string "え? 『{STR_VAR_2}』?\p……\p…あ! あぁ!\nしってる しってるよ!\pもっ もちろん しってるさ!\n『{STR_VAR_2}』 だろ?\pいいよね!\n『{STR_VAR_2}』 って!\pいま すごく はやってる よね\nぼくが しらないはず ないじゃ ないか!\p『{STR_VAR_1}』 なんて\nもう じだいおくれ\pいまは 『{STR_VAR_2}』の\nじだい だね!{EOS}"
	.if (. - gText_Rom_1E556D) > 0x91
	.error "gText_Rom_1E556D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E556D) < 0x91
	.space 0x91 - (. - gText_Rom_1E556D)
	.endif
