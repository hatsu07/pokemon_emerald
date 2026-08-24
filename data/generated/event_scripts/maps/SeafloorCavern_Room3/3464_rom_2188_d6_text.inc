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
	@ data/maps/SeafloorCavern_Room3/scripts.inc:17 SeafloorCavern_Room3_Text_ShellyDefeat (+1 aliases)
	.globl gText_Rom_2187F9
gText_Rom_2187F9: @ 0x082187F9
	.string "オーッホッホ!\pいったーい!{EOS}"
	.if (. - gText_Rom_2187F9) > 0xf
	.error "gText_Rom_2187F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2187F9) < 0xf
	.space 0xf - (. - gText_Rom_2187F9)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:20 SeafloorCavern_Room3_Text_ShellyPostBattle
	.globl gText_Rom_218808
gText_Rom_218808: @ 0x08218808
	.string "オーッホッホ!\pあなた そんなに つよいんだもの\nアクアだんの なかま じゃなくて\lとっても ざんねんだわ\pリーダーが じつげん してくれる\nすばらしい せかいを\lいっしょに たのしむことが できたのに{EOS}"
	.if (. - gText_Rom_218808) > 0x66
	.error "gText_Rom_218808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218808) < 0x66
	.space 0x66 - (. - gText_Rom_218808)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:23 SeafloorCavern_Room3_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_21886E
gText_Rom_21886E: @ 0x0821886E
	.string "オレたちの やぼうの ために\nポケモンは ひつような ものだが\pポケモンの ちからを かりて\nおまえの ような やつが\lこんな ところまで ジャマしに くる!\pよのなか うまく いかない もんだ!{EOS}"
	.if (. - gText_Rom_21886E) > 0x63
	.error "gText_Rom_21886E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21886E) < 0x63
	.space 0x63 - (. - gText_Rom_21886E)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:26 SeafloorCavern_Room3_Text_Grunt5Defeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2188D1
gText_Rom_2188D1: @ 0x082188D1
	.string "ぐはっ!{EOS}"
	.if (. - gText_Rom_2188D1) != 0x5
	.error "gText_Rom_2188D1 must retain its original byte length"
	.endif
	.globl gText_Rom_2188D2
	.set gText_Rom_2188D2, gText_Rom_2188D1 + 0x1
	@ data/maps/SeafloorCavern_Room3/scripts.inc:29 SeafloorCavern_Room3_Text_Grunt5PostBattle
	.globl gText_Rom_2188D6
gText_Rom_2188D6: @ 0x082188D6
	.string "オレたちが あたまの あがらない\nあの リーダーに\pよくも まあ おまえの ような\nこどもが さからえる もんだよな!\pもしかして おまえって\nとんでもないやつ…… なのか?{EOS}"
	.if (. - gText_Rom_2188D6) > 0x58
	.error "gText_Rom_2188D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2188D6) < 0x58
	.space 0x58 - (. - gText_Rom_2188D6)
	.endif
	@ Embedded ROM bytes: file offset 0x21892E, size 0x2F
	.byte 0x00, 0x5C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x5D, 0x89, 0x21, 0x08, 0x73, 0x89, 0x21, 0x08, 0x0F
	.byte 0x00, 0x7A, 0x89, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xA4, 0x89
	.byte 0x21, 0x08, 0xBA, 0x89, 0x21, 0x08, 0x0F, 0x00, 0xC4, 0x89, 0x21, 0x08, 0x09, 0x06, 0x02
