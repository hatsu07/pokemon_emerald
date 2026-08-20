	@ data/maps/SeafloorCavern_Room3/scripts.inc:14 SeafloorCavern_Room3_Text_ShellyIntro (+1 aliases)
	.globl gText_Rom_21876D
gText_Rom_21876D: @ 0x0821876D
	.string "オーッホッホ!\pせんすいていも ないのに\nよく ここまで おいかけて きたわね!\lたいした おこさま だわ!\pでもね……\nジャマされると めんどう なのよね\pてんき けんきゅうじょ での\nかりも かえしたいし……\pちょっと いたい おもい させちゃうから\nかくご しなさーい!!{EOS}"
	.if (. - gText_Rom_21876D) > 0x8c
	.error "gText_Rom_21876D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21876D) < 0x8c
	.space 0x8c - (. - gText_Rom_21876D)
	.endif
