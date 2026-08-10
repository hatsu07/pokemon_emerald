	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B512
gText_Rom_24B512: @ 0x0824B512
	.string "{0xFD}{0x02}の　{0xFD}{0x04}は\nいんしょうを　はねかえした！$"
	.if (. - gText_Rom_24B512) > 0x17
	.error "gText_Rom_24B512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B512) < 0x17
	.space 0x17 - (. - gText_Rom_24B512)
	.endif
	@ analyzed canonical ROM range 0x0824B529-0x0824B70B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0824B529: @ 0x0824B529
	.string "{STR_VAR_1}の\nアピールこうかが　なくなった!$"
EventText_JP_0824B53D: @ 0x0824B53D
	.string "スペシャル　アピールの\nこうかが　なくなった!$"
EventText_JP_0824B555: @ 0x0824B555
	.string "ぜんいんの　アピールを\nおなじくらいに　みせた!$"
EventText_JP_0824B56E: @ 0x0824B56E
	.string "{STR_VAR_2}の\nアピールを　ひくくみせた!$"
EventText_JP_0824B580: @ 0x0824B580
	.string "{STR_VAR_1}より　めだつ\nアピールを　ひくくみせた!$"
EventText_JP_0824B597: @ 0x0824B597
	.string "{STR_VAR_2}の\nちゅうもくを　うばった!$"
EventText_JP_0824B5A8: @ 0x0824B5A8
	.string "{STR_VAR_2}の\nアピールを　ひくくみせた!$"
EventText_JP_0824B5BA: @ 0x0824B5BA
	.string "みんなの　アピールを\nおおはばに　ひくくみせた!$"
EventText_JP_0824B5D3: @ 0x0824B5D3
	.string "つぎの　{STR_VAR_1}の　アピールに\nきたいが　たかまった!$"
EventText_JP_0824B5ED: @ 0x0824B5ED
	.string "{STR_VAR_1}より　めだっている\nアピールを　ひくくみせた!$"
EventText_JP_0824B607: @ 0x0824B607
	.string "しんさいんの　すきなアピールを\nいつもより　ひくくみせた!$"
EventText_JP_0824B625: @ 0x0824B625
	.string "じぶんいがいの　アピールを\nはんぶんの　できにみせた!$"
EventText_JP_0824B641: @ 0x0824B641
	.string "いままで　じゃまされた\nうっぷんを　はらして　めだった!$"
EventText_JP_0824B65E: @ 0x0824B65E
	.string "もう　アピールに\nさんか　できなくなった!$"
EventText_JP_0824B674: @ 0x0824B674
	.string "しんさいんの　こころに　うったえ\nすごい　アピールになった!$"
EventText_JP_0824B693: @ 0x0824B693
	.string "つぎからの　アピールに\nすこし　きたいが　たかまった!$"
EventText_JP_0824B6AF: @ 0x0824B6AF
	.string "スペシャル　アピールがある\nかずだけ　めだった!$"
EventText_JP_0824B6C8: @ 0x0824B6C8
	.string "{STR_VAR_1}と\nおなじくらい　めだった!$"
EventText_JP_0824B6D9: @ 0x0824B6D9
	.string "じゃまされた　アピールを\nさらに　めだたなくした!$"
EventText_JP_0824B6F3: @ 0x0824B6F3
	.string "ぜんいんの　アピールと\nおなじくらいに　みせた!$"
