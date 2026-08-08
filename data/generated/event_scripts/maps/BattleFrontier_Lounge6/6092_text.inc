	@ data/maps/BattleFrontier_Lounge6/scripts.inc:29 BattleFrontier_Lounge6_Text_WouldYouLikeToTrade
	.globl gText_Rom_239654
gText_Rom_239654: @ 0x08239654
	.string "わたしの この ポケモン\n{STR_VAR_2}って いうんですよ しってます?\lなかなか かわいくて イイかんじ ですよー\pこのコ だったら わたし\nむねをはって こうかんに だせます!\pどうです?\nわたしの この {STR_VAR_2}\l{STR_VAR_1}と こうかん しません?"
	.byte EOS
	.if (. - gText_Rom_239654) > 0x76
	.error "gText_Rom_239654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239654) < 0x76
	.space 0x76 - (. - gText_Rom_239654)
	.endif
