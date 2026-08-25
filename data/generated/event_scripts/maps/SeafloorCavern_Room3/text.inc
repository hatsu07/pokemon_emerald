	@ data/maps/SeafloorCavern_Room3/scripts.inc:14 SeafloorCavern_Room3_Text_ShellyIntro (+1 aliases)
	.globl SeafloorCavern_Room3_Text_ShellyIntro
SeafloorCavern_Room3_Text_ShellyIntro: @ 0x0821876D
	.string "オーッホッホ!\pせんすいていも ないのに\nよく ここまで おいかけて きたわね!\lたいした おこさま だわ!\pでもね……\nジャマされると めんどう なのよね\pてんき けんきゅうじょ での\nかりも かえしたいし……\pちょっと いたい おもい させちゃうから\nかくご しなさーい!!{EOS}"
	.if (. - SeafloorCavern_Room3_Text_ShellyIntro) > 0x8c
	.error "SeafloorCavern_Room3_Text_ShellyIntro may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room3_Text_ShellyIntro) < 0x8c
	.space 0x8c - (. - SeafloorCavern_Room3_Text_ShellyIntro)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:17 SeafloorCavern_Room3_Text_ShellyDefeat (+1 aliases)
	.globl SeafloorCavern_Room3_Text_ShellyDefeat
SeafloorCavern_Room3_Text_ShellyDefeat: @ 0x082187F9
	.string "オーッホッホ!\pいったーい!{EOS}"
	.if (. - SeafloorCavern_Room3_Text_ShellyDefeat) > 0xf
	.error "SeafloorCavern_Room3_Text_ShellyDefeat may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room3_Text_ShellyDefeat) < 0xf
	.space 0xf - (. - SeafloorCavern_Room3_Text_ShellyDefeat)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:20 SeafloorCavern_Room3_Text_ShellyPostBattle
	.globl SeafloorCavern_Room3_Text_ShellyPostBattle
SeafloorCavern_Room3_Text_ShellyPostBattle: @ 0x08218808
	.string "オーッホッホ!\pあなた そんなに つよいんだもの\nアクアだんの なかま じゃなくて\lとっても ざんねんだわ\pリーダーが じつげん してくれる\nすばらしい せかいを\lいっしょに たのしむことが できたのに{EOS}"
	.if (. - SeafloorCavern_Room3_Text_ShellyPostBattle) > 0x66
	.error "SeafloorCavern_Room3_Text_ShellyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room3_Text_ShellyPostBattle) < 0x66
	.space 0x66 - (. - SeafloorCavern_Room3_Text_ShellyPostBattle)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:23 SeafloorCavern_Room3_Text_Grunt5Intro (+1 aliases)
	.globl SeafloorCavern_Room3_Text_Grunt5Intro
SeafloorCavern_Room3_Text_Grunt5Intro: @ 0x0821886E
	.string "オレたちの やぼうの ために\nポケモンは ひつような ものだが\pポケモンの ちからを かりて\nおまえの ような やつが\lこんな ところまで ジャマしに くる!\pよのなか うまく いかない もんだ!{EOS}"
	.if (. - SeafloorCavern_Room3_Text_Grunt5Intro) > 0x63
	.error "SeafloorCavern_Room3_Text_Grunt5Intro may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room3_Text_Grunt5Intro) < 0x63
	.space 0x63 - (. - SeafloorCavern_Room3_Text_Grunt5Intro)
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:26 SeafloorCavern_Room3_Text_Grunt5Defeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SeafloorCavern_Room3_Text_Grunt5Defeat
SeafloorCavern_Room3_Text_Grunt5Defeat: @ 0x082188D1
	.string "ぐはっ!{EOS}"
	.if (. - SeafloorCavern_Room3_Text_Grunt5Defeat) != 0x5
	.error "SeafloorCavern_Room3_Text_Grunt5Defeat must retain its original byte length"
	.endif
	@ data/maps/SeafloorCavern_Room3/scripts.inc:29 SeafloorCavern_Room3_Text_Grunt5PostBattle
	.globl SeafloorCavern_Room3_Text_Grunt5PostBattle
SeafloorCavern_Room3_Text_Grunt5PostBattle: @ 0x082188D6
	.string "オレたちが あたまの あがらない\nあの リーダーに\pよくも まあ おまえの ような\nこどもが さからえる もんだよな!\pもしかして おまえって\nとんでもないやつ…… なのか?{EOS}"
	.if (. - SeafloorCavern_Room3_Text_Grunt5PostBattle) > 0x58
	.error "SeafloorCavern_Room3_Text_Grunt5PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room3_Text_Grunt5PostBattle) < 0x58
	.space 0x58 - (. - SeafloorCavern_Room3_Text_Grunt5PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21892E, size 0x2F
	.byte 0x00, 0x5C, 0x00, 0x08, 0x00, 0x00, 0x00
	.4byte SeafloorCavern_Room4_Text_Grunt3Intro
	.4byte SeafloorCavern_Room4_Text_Grunt3Defeat
	.byte 0x0F
	.byte 0x00
	.4byte SeafloorCavern_Room4_Text_Grunt3PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xA4, 0x89
	.byte 0x21, 0x08, 0xBA, 0x89, 0x21, 0x08, 0x0F, 0x00, 0xC4, 0x89, 0x21, 0x08, 0x09, 0x06, 0x02
