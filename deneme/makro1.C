{
	// Sinüs fonksiyonunu tanýmla
	TF1* sine = new TF1("sine", "sin(x)", -20, 20);

	// Grafiði çiz
	TCanvas* c1 = new TCanvas();
	TGraph* graph = new TGraph(sine);
	graph->SetTitle("Sinus Grafigi");
	graph->GetXaxis()->SetTitle("x");
	graph->GetYaxis()->SetTitle("y");
	graph->Draw();
}
