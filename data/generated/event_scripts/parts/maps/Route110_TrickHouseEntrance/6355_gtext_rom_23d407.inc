	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:727 Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse
	.globl gText_Rom_23D407
gText_Rom_23D407: @ 0x0823D407
	.string "あんた わがはいの カラクリやしきに\nちょうせんしに きたって\lわけだろう そうだろう!\lよしっ ちょうせんを みとめよう!\pそこの かけじくから はいって\nちょうせん するがいい!\lわがはいは おくの へやで まってるぞ!"
	.byte EOS
	.if (. - gText_Rom_23D407) > 0x71
	.error "gText_Rom_23D407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D407) < 0x71
	.space 0x71 - (. - gText_Rom_23D407)
	.endif
