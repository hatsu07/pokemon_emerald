	@ data/text/apprentice.inc:820 gText_ApprenticeWinSpeechThanks8
	.globl gText_Rom_2730AD
gText_Rom_2730AD: @ 0x082730AD
	.string "{STR_VAR_1}\pう うわああぁぁあ!\nこの ことばを わたしが!\lかっ かんげき………っ!!\pあああ ありがとう ございますっ!\nもう おもいのこす ことは ありませんっ!\lわたし これから たびだって\lいろいろな ひとと しょうぶ してみます!\pなにもかも {PLAYER}さんの\nおかげで あります!\lほんとうに ありがとう ございますっ!\pそれでは それでは\nいつか しょうぶの ばで あいましょう!$"
	.if (. - gText_Rom_2730AD) > 0xc1
	.error "gText_Rom_2730AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2730AD) < 0xc1
	.space 0xc1 - (. - gText_Rom_2730AD)
	.endif
