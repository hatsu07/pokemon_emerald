	@ data/text/match_call.inc:928 MatchCall_Text_MrStone4
	.globl gText_Rom_26C465
gText_Rom_26C465: @ 0x0826C465
	.string "ツワブキ『おお! {PLAYER}{KUN}!\pそうそう カナシダトンネルは\nわがしゃが ほって いたんだけどね\pあの あたりに せいそく している\nポケモンを ほご するために\lこうじは ちゅうし したんだよ\pまあ にんげんの べんりさ よりは\nポケモンが しずかに くらせる\lそのほうが だいじな ことだからね!"
	.byte EOS
	.if (. - gText_Rom_26C465) > 0x96
	.error "gText_Rom_26C465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C465) < 0x96
	.space 0x96 - (. - gText_Rom_26C465)
	.endif
