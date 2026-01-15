#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin.ignore();
	long long countA = 0;
	string s = R"(In this expansive collection of written expression, your mission, though shrouded in subtle allusions, is unequivocal. Your quest within these lines is to meticulously count the appearances of a character, the initial symbol in the most spoken language worldwide, interspersed throughout these sentences.
The written word is a universe of symbolism and linguistic craftsmanship, a mosaic of letters and meanings. As you journey through this labyrinth of prose, you will unveil stories, discussions, and descriptions that weave the narrative. But concealed beneath the surface, within this narrative, another challenge awaits your scrutiny.
It's at this juncture that we must pause and reveal the essence of your mission. Your task, veiled in the complexities of context and design, is to identify and quantify the instances of the initial symbol in the most spoken language. This character may assume a range of forms, both in uppercase and lowercase, and it may blend into diverse textual settings. It is a riddle for the discerning, a code to decipher, a quest for the observant.
The outcome of your endeavor is not merely a numerical count but a tribute to your perspicacious eye and meticulous attention to detail. It calls upon you to navigate through a spectrum of symbols, to discern and enumerate the character that intertwines with the very essence of this textual composition.
With every page you turn, every sentence you read, and each paragraph you traverse, maintain your unwavering vigilance. Acknowledge the subtleties of typography, appreciate the nuances of language, and grasp the structural elements of the narrative. As you approach the culmination of these 530 words and 2788 letters, your mission is poised to conclude. The number of times the initial symbol in the language of this script, which you are entrusted to uncover, awaits your revelation. Within this text, the essence of your quest has been intricately interwoven, beckoning your discerning eye to illuminate it.
But the story doesn't end here. As you continue on this journey, remember that mysteries await in unexpected places. New adventures and challenges lie ahead, each word you read brings you closer to unlocking new enigmas, and every revelation opens the door to more discoveries. In this grand narrative of exploration, the narrative evolves as you unfold it, with each reading revealing new dimensions and uncharted territories of fascination.
And so, with every text you encounter, remember that you are an explorer, a detective, and an architect of meaning. The path you walk is not a finite one but a journey that extends infinitely in all directions. Let your curiosity be your guiding star, your observations your compass, and your discoveries your treasures. Your adventure in the world of words is an ever-unfolding saga, and with each page you turn, you step into the unknown, uncovering new tales and hidden wonders.
The revelations of this text are but the beginning, a prelude to a broader narrative that you are co-authoring with every reading. Whether you read for pleasure, knowledge, or the thrill of uncovering the hidden, your path is a perpetual one, eternally fascinating and full of surprises. As one chapter concludes, another beckons, and in every line, a world of mysteries and revelations awaits.)";

	for (char ch : s)
	{
		if (tolower(ch) == 'a')
			countA++;
	}
	cout << countA << "\n";
	return 0;
}
